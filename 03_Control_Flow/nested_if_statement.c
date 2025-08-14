/*
    ! --- Nested If Statements in C ---
    --------------------------------------------------
    * An 'if' statement inside another 'if' or 'else'.
    * Used when the second check should only happen if the first check passes.
    * Think: "If this is true, then also check that."
*/

//? SIMPLE EXAMPLE

#include <stdio.h>

int main() {
    int age;
    char hasTicket;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a ticket? (y/n) : ");
    scanf(" %c", &hasTicket);

    if(age >= 18) {
        if(hasTicket == 'y' || hasTicket == 'Y') {
            printf("You may enter the event. \n");
        } else {
            printf("Sorry, you need a ticket to enter. \n");
        }
    } else {
        printf("Sorry, you must be at least 18 years old to enter. \n");
    }

    return 0;
}