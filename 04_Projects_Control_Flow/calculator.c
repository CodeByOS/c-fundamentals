/*
    ! --- Exercise: Calculator Program ---

    Write a C program that:

    1. Asks the user to enter two numbers.
    2. Asks the user to choose an operation: +, -, *, /.
    3. Performs the operation and prints the result.
    4. Uses if-else or switch statements to determine the operation.
*/



/*
    ! --- Try to solve the exercise  ---
*/













//!  --- Solution ---

// #include<stdio.h>

// int main() {
//     double num1, num2, result;
//     char operator;

//     //* Step 1: Get numbers from user
//     printf("Enter the first number: ");
//     scanf("%lf", &num1);

//     printf("Enter the second number: ");
//     scanf("%lf", &num2);

//     //* Step 2: Get operation
//     printf("Enter operator (+, -, *, /): ");
//     scanf(" %c", &operator);

//     //* Step 3: Perform calculation
//     switch(operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result : %.2lf\n", result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result : %.2lf\n", result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result : %.2lf\n", result);
//             break;
//         case '/':
//             if(num2 != 0) {
//                 result = num1 / num2;
//                 printf("Result : %.2lf\n", result);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default: 
//             printf("Invalid operator!\n");
//     }
//     return 0;
// }