/*
    ! --- FOR LOOPS IN C ---
    ----------------------------------------------------------------------------------
    Syntax:
        for(initialization; condition; update) {
            code to repeat
        }

    How it works:
    - Initialization runs ONCE at the beginning.
    - Condition is checked before each loop iteration.
    - If condition is TRUE → run the loop body.
    - After each iteration, update is executed, then the condition is checked again.

    Example below:
    - i starts at 0
    - While i < 5, print i
    - After each loop, i is incremented
    - Stops when i = 5
*/

#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
