#include <stdio.h>
#include <math.h> // Required for math functions

//! Define M_PI (pi) if it's not already defined by the compiler or math.h
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double num = 9.0;
    double angle_deg = 45.0;
    double angle_rad = angle_deg * (M_PI / 180.0); // Convert degrees to radians

    printf("Number: %.2f\n\n", num);

    //* Square root
    printf("sqrt(%.2f) = %.2f\n", num, sqrt(num));

    //* Power
    printf("pow(%.2f, 3) = %.2f\n", num, pow(num, 3));

    //* Absolute value
    printf("fabs(-%.2f) = %.2f\n", num, fabs(-num));

    //* Ceiling and floor
    printf("ceil(%.2f) = %.2f\n", 4.3, ceil(4.3));
    printf("floor(%.2f) = %.2f\n", 4.7, floor(4.7));

    return 0;
}
