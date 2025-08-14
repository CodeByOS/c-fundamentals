/*
    ! --- Introduction to If Statements in C ---
    --------------------------------------------------------------------------------------
    In C programming, an "if statement" allows your program to make decisions.

    - Purpose:
        To run certain parts of code only when a condition is TRUE.

    * Basic Syntax:
        if (condition) {
            Code runs if condition is true
        }

    - Example:
        if (x > 10) {
            printf("x is greater than 10");
        }

    * Else and Else If:
        if (condition1) {
            Code runs if condition1 is true
        } else if (condition2) {
            Code runs if condition2 is true
        } else {
            Code runs if neither condition is true
        }

    - How It Works:
        1. The condition is evaluated.
        2. If it’s true (non-zero), the code block runs.
        3. If it’s false (zero), the program skips to the next else if or else.

    - Common Operators for Conditions:
        >   greater than
        >=  greater than or equal to
        <   less than
        <=  less than or equal to
        ==  equal to
        !=  not equal to

    - Key Tip:
        Always ensure that the condition inside if() produces a TRUE (non-zero) or FALSE (zero) result.
*/

//? SIMPLE EXAMPLE

#include <stdio.h>  // Standard Input/Output library

int main() {
    int age;  // Variable to store the user's age

    // Ask the user for their age
    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer from the user and store it in 'age'

    // Check if the age is 18 or older
    if (age >= 18) {
        printf("You are an adult.\n");
    } 
    // If not an adult, check if the age is 13 or older
    else if (age >= 13) {
        printf("You are a teenager.\n");
    } 
    // If neither condition above is true, the person must be younger than 13
    else {
        printf("You are a child.\n");
    }

    return 0; // End of program
}