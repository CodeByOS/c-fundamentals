/*
    ! --- Switch Statements in C ---
    --------------------------------------------------------------------------
    A switch statement in C is a control flow structure that allows you to 
    execute different blocks of code based on the value of an expression.
    
    Syntax:
        switch(expression) {
            case value1:
                code block
                break;
            case value2:
                code block
                break;
            ...
            default:
                code block (optional)
        }
    
    How it works:
    - The expression inside 'switch' is evaluated.
    - The result is compared to each 'case' value.
    - If a match is found, the code for that case runs until a 'break' statement is encountered, or until the switch statement ends.
    - If no case matches, the 'default' block (if present) runs.
    
    Notes:
    - The 'break' statement is important to prevent "fall-through" (where execution continues into the next case).
    - Switch works best with integer and character constants, not with strings or floating-point values.
*/

//? SIMPLE EXAMPLE

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1-7) to get the day of the week: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    
    default:
        printf("Invalid day number! Please enter a number from 1 to 7.\n");
    }
}