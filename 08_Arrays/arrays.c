/*
    ! --- ARRAYS IN C ---
    ---------------------------------------------------------------------------------------------
    - An array is a collection of variables of the same type stored in a continuous memory block.
    - Instead of declaring multiple variables (like int a, b, c...), we can declare one array.

    SYNTAX:
        type arrayName[size];

        Example:
        int numbers[5];   // array of 5 integers

    KEY POINTS:
        1. Array indices start from 0 (first element).
        2. The last element index = size - 1.
        3. Arrays can be initialized at declaration:
            int arr[3] = {10, 20, 30};
        4. If not fully initialized, the rest will be 0.

    USES:
        - Store multiple values of the same type.
        - Useful for loops, searching, sorting, etc.
*/

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, numbers[i]);
    }

    return 0;
}