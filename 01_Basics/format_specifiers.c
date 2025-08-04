#include <stdio.h>

/*
    * Format specifiers in C are used in functions like printf to define how data should be formatted when printed.
    * They specify the type of data to be printed and how it should be displayed.
*/

int main() {
    // Integer
    int age = 25;
    printf("Integer (%%d): %d\n", age);

    // Float
    float pi = 3.14159;
    printf("Float (%%f): %f\n", pi);
    printf("Float with 2 decimal places (%%.2f): %.2f\n", pi);

    // Double
    double largeNumber = 123456.7890123;
    printf("Double (%%lf): %lf\n", largeNumber);

    // Character
    char grade = 'A';
    printf("Character (%%c): %c\n", grade);

    // String
    char name[] = "Alice";
    printf("String (%%s): %s\n", name);

    // Hexadecimal
    int hexValue = 255;
    printf("Hexadecimal (%%x): %x\n", hexValue);
    printf("Hexadecimal uppercase (%%X): %X\n", hexValue);

    // Octal
    int octValue = 64;
    printf("Octal (%%o): %o\n", octValue);

    // Unsigned integer
    unsigned int u = 4000000000;
    printf("Unsigned (%%u): %u\n", u);

    // Scientific notation
    double sci = 12345.6789;
    printf("Scientific notation (%%e): %e\n", sci);
    printf("Scientific notation uppercase (%%E): %E\n", sci);

    return 0;
}
