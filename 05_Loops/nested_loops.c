/*
    ! --- NESTED LOOPS IN C ---
    ------------------------------------------------------------------------------------------
    - A nested loop is a loop inside another loop.
    - The "inner loop" executes completely for each single iteration of the "outer loop".

    Syntax:
        for( ... ) {
            for( ... ) {
                code to be executed
            }
        }

    How it works:
    - Outer loop controls "rows".
    - Inner loop controls "columns".
    - Together they can create patterns, grids, or handle multidimensional data.

    Example below:
    - Outer loop i goes from 1 to 3
    - Inner loop j goes from 1 to 3
    - Prints all coordinate pairs (i, j)
*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n"); // new line after each row
    }
    return 0;
}
