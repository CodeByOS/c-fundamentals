/*
    ! --- WHILE LOOPS IN C ---
    ----------------------------------------------------------------------------------
    Syntax:
        while(condition) {
            code to repeat
        }

    How it works:
    - The condition is checked BEFORE each iteration.
    - If the condition is TRUE, the loop body executes.
    - If the condition is FALSE, the loop ends.
    - Be careful: if the condition never becomes false, you get an infinite loop.

    Example below:
    - Start i = 0
    - While i < 5 → print i, then increase i by 1
    - Stops when i reaches 5
*/

#include <stdio.h>

int main() {
    int i = 0;
    while(i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}
