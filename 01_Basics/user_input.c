/*
    * User Input is a fundamental aspect of programming that allows interaction with the user.
    * In C, we can use functions like `scanf` to read input from the user.
    * This example demonstrates how to read an integer from the user and print it back.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[40];
    int age;
    char grade;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- User Information ---\n");
    printf("Name : %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade : %c\n", grade);

    return 0;
}