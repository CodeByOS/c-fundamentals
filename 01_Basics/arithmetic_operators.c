/*
    * Arithmetic Operators in C are used to perform basic mathematical operations.
    * The common arithmetic operators include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%).
*/


#include <stdio.h>
int main() {
    int a = 10, b = 3;
    int sum, difference, product, quotient, remainder;

    // Addition
    sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Subtraction
    difference = a - b;
    printf("Difference: %d - %d = %d\n", a, b, difference);

    // Multiplication
    product = a * b;
    printf("Product: %d * %d = %d\n", a, b, product);

    // Division
    quotient = a / b;
    printf("Quotient: %d / %d = %d\n", a, b, quotient);

    // Modulus
    remainder = a % b;
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    // Increment and Decrement
    a++;
    printf("Incremented a: %d\n", a);
    b--;
    printf("Decremented b: %d\n", b);

    // Using compound assignment operators
    a += 5; 
    printf("After a += 5: %d\n", a);
    b *= 2;
    printf("After b *= 2: %d\n", b);

    return 0;
}