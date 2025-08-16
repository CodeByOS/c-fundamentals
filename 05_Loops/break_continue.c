/*
    ! --- BREAK AND CONTINUE IN C LOOPS ---
    ---------------------------------------------------------------------------
    1) break:
        - Immediately ends the loop (no more iterations).
    2) continue:
        - Skips the current iteration, jumps directly to the next check.

    How it works:
    - Use break when you want to stop looping early.
    - Use continue when you want to skip certain values but keep looping.

    Example below:
    - Loop i from 0 to 9
    - If i == 5 → break (stop the loop completely)
    - If i is even → continue (skip printing that number)
    - Only odd numbers below 5 will be printed
*/

#include <stdio.h>

int main() {
    for(int i = 0; i < 10; i++) {
        if(i == 5) {
            break;  // exits the loop
        }
        if(i % 2 == 0) {
            continue; // skips even numbers
        }
        printf("%d\n", i);
    }
    return 0;
}
