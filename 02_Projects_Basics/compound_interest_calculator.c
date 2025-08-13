/*

    ! --- Exercise: Compound Interest Calculator ---

    Write a C program that:
    1. Asks the user to enter:
        - Principal amount (P)
        - Annual interest rate in percentage (R)
        - Number of times interest is compounded per year (N)
        - Number of years (T)
    2. Calculates the compound interest using the formula:

    A = P * (1 + R/(100*N))^(N*T)

    Where:
    - A is the total amount
    - P is principal
    - R is annual interest rate (%)
    - N is number of times interest is compounded per year
    - T is number of years

    3. Displays the total amount and the interest earned with two decimal places.

    Example Run:
    Enter the principal amount: 1000
    Enter the annual interest rate (in %): 5
    Enter the number of times interest is compounded per year: 4
    Enter the number of years: 3

    Total amount: $1161.62
    Interest earned: $161.62

*/


/*
    ! --- Try to solve the exercise  ---
*/





//!  --- Solution ---

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double principal, rate, amount, interest;
//     int n, t;

//     printf("Enter the principal amount: ");
//     scanf("%lf", &principal);

//     printf("Enter the annual interest rate (in %%): ");
//     scanf("%lf", &rate);

//     printf("Enter the number of times interest is compounded per year: ");
//     scanf("%d", &n);

//     printf("Enter the number of years: ");
//     scanf("%d", &t);

//     // Compound interest formula
//     amount = principal * pow((1 + rate / (100 * n)), n * t);
//     interest = amount - principal;

//     printf("\nTotal amount: $%.2lf\n", amount);
//     printf("Interest earned: $%.2lf\n", interest);

//     return 0;
// }