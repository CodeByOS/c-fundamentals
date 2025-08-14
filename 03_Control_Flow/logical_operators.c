/*
    ! --- Logical Operators in C ---
    ---------------------------------------------------------------------------

    Logical operators are used to combine or modify conditional statements.
    They allow you to check multiple conditions at once in decision-making.

    In C, there are three main logical operators:

    1. AND (&&)  
        - Returns true if **both** conditions are true.
        - Example: (x > 0 && y > 0) → true only if both x and y are positive.

    2. OR (||)  
        - Returns true if **at least one** condition is true.
        - Example: (x > 0 || y > 0) → true if x is positive OR y is positive.

    3. NOT (!)  
        - Reverses the result of a condition.
        - Example: !(x > 0) → true if x is NOT positive.

    Truth Table Summary:
    -----------------------------------------
        A      B    A && B   A || B   !A
        true  true    true     true   false
        true  false   false    true   false
        false true    false    true   true
        false false   false    false  true
*/

//? SIMPLE EXAMPLE

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // AND operator (&&)
    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers.\n");
    }

    // OR operator (||)
    if (a > 0 || b < 0) {
        printf("At least one of the conditions is true.\n");
    }

    // NOT operator (!)
    if (!(a < 0)) {
        printf("a is not a negative number.\n");
    }

    // Example combining them
    if ((a < 10 && b > 5) || !(a == b)) {
        printf("Combined logical expression evaluated to true.\n");
    }

    return 0;
}
