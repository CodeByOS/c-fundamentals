/*
    ! --- Exercise: tempurate Program ---

    Write a C program that converts temperatures between Celsius and Fahrenheit.
    The program should ask the user to input the temperature value and the unit (C or F),
    and then convert it to the other unit.
    Example:
    Enter temperature: 37
    Enter unit (C/F): C
    37 C = 98.6 F
*/



/*
    ! --- Try to solve the exercise  ---
*/












//!  --- Solution ---
// #include<stdio.h>

// int main() {
//     float temp;
//     char unit;

//     // Ask the user for input
//     printf("Enter temperature: ");
//     scanf("%f", &temp);
    
//     printf("Enter unit (C/F): ");
//     scanf(" %c", &unit);  // Note the space before %c to consume leftover newline

//     // Conversion logic
//     if (unit == 'C' || unit == 'c') {
//         float fahrenheit = (temp * 9/5) + 32;
//         printf("%.2f C = %.2f F\n", temp, fahrenheit);
//     } else if (unit == 'F' || unit == 'f') {
//         float celsius = (temp - 32) * 5/9;
//         printf("%.2f F = %.2f C\n", temp, celsius);
//     } else {
//         printf("Invalid unit. Please enter C or F.\n");
//     }

//     return 0;
// }
