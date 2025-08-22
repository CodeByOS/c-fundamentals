/*
    ! --- ARRAYS WITH USER INPUT ---
    ------------------------------------------------------------
    - We can let the user enter values to fill an array.
    - Use a loop with scanf() to read multiple inputs.
    - Example use: storing grades, marks, or ages.

    STEPS:
    1. Declare an array.
    2. Ask user to input values.
    3. Use a loop to store values.
    4. Use another loop to display them.
*/

#include <stdio.h>

int main() {
    int scores[5];

    printf("Enter 5 test scores:\n");
    for(int i = 0; i < 5; i++) {
        printf("Score %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    printf("\nYou entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("Score %d = %d\n", i+1, scores[i]);
    }

    return 0;
}