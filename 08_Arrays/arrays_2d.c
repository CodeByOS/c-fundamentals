/*
    ! --- 2D ARRAYS IN C ---
    ------------------------------------------------------------
    - A 2D array is like a table (rows × columns).
    - It's essentially an "array of arrays".

    SYNTAX:
        type arrayName[rows][cols];

        Example:
        int matrix[2][3];  // 2 rows, 3 columns

    USAGE:
    - Store data in grid form (matrices, tables).
    - Useful for games (tic-tac-toe, sudoku), matrices, etc.

    Accessing elements:
        matrix[row][col]

*/

#include <stdio.h>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("2D Array (Matrix):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}