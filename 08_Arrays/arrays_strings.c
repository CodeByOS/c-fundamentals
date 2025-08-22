/*
    ! --- ARRAYS OF STRINGS ---
    -----------------------------------------------------------------------------
    - A string in C is an array of characters ending with '\0' (null character).
    - Strings are stored in char arrays.

    Examples:
        char word[6] = "Hello";  // last space for '\0'
        char name[] = "John";

    Common <string.h> functions:
        strlen(str)  -> length of string
        strcpy(dest, src) -> copy
        strcmp(s1, s2) -> compare
        strcat(dest, src) -> concatenate

    We can also make arrays of strings:
        char names[3][20] = {"Alice", "Bob", "Charlie"};

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);   // safer than gets()

    // Remove newline added by fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);

    return 0;
}
