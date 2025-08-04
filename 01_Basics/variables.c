/*
    * Variables in C
    * This program demonstrates the declaration and initialization of variables in C.
    * It includes examples of different data types such as int, float, char, and double.
    * The program prints the values of these variables to the console.
*/


#include <stdio.h> //* This header file is required for input and output functions.
#include <stdbool.h> //* This header file is required for boolean type support in C.

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

    //* String variable example
    char name[] = "Oussama SAIDI";
    char email[] = "saidi.oussama2004@gmail.com";
    char food[] = "pizza";

    printf("Hello %s\n", name); 
    printf("My email is %s\n", email);              
    printf("My favorite food is %s\n", food);
    //! Note: The format specifier %s is used for strings in printf.

    //* Boolean variable example

    /*
        * C does not have a built-in boolean type, but we can use int to represent boolean values.
        * We need to include the stdbool.h header file for boolean type support.
        * 0 is false, and any non-zero value is true.
        * In C, we typically use 0 for false and 1 for true.
    */

    bool isTrue = true; //* Boolean variable
    printf("%d\n", isTrue); //* Printing the boolean value (1 for true, 0 for false)



    return 0; //* Return statement indicating successful execution
}


//! NOTE :

/*
    * int = whole numbers (4 bytes in modern systems)
    * float = single-precision floating-point numbers (4 bytes)
    * char = single character (1 byte)
    * double = double-precision floating-point numbers (8 bytes)
    * bool = boolean type (true/false, typically 1 byte, requires stdbool.h)
    * char[] = string (array of characters, null-terminated)
    * printf() is used to print formatted output to the console.
*/

/*
    * You can find the size of variables using the sizeof() operator.
    * Example: printf("Size of int: %zu bytes\n", sizeof(int));
    * This will print the size of the int data type in bytes. 
*/