/*
    ! --- DO-WHILE LOOP in C ---
    ----------------------------------------------------------------------------------
    - A do-while loop is similar to a while loop, but it **executes the loop body at least once** before checking the condition.
        
    - Syntax:

        do {
            --code to execute
        } while(condition);

    * The condition is evaluated **after** the loop body.
    * Use cases: menus, repeating input until valid, running something at least once.
*/

#include <stdio.h>

int main() {
    int num;

    do 
    {
        printf("Enter A number between 0 and 9 : ");
        scanf("%d", &num);

        if(num < 0 || num > 9) {
            printf("Invalid number..Try again !\n");
        }

    } while (num < 0 || num > 9);

    printf("You entered: %d\n", num);
    
    return 0;
}