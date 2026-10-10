#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y, r1, r2;

    printf("Enter variables\n");
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter R1: ");
    scanf("%lf", &r1);
    printf("Enter R2: ");
    scanf("%lf", &r2);

    printf("Results\n");

    // №1
    printf("Task 1: ");
    if (x + 1 < 0 || x - 1 < 0) {
        printf("Error: x must be >= 1\n");
    }
    else {
        double res1 = sin(sqrt(x + 1)) - sin(sqrt(x - 1));
        printf("Result = %.4f\n", res1);
    }

    // №2
    printf("Task 2:");
    double res2 = pow(2.0, -x) - cos(x) + sin(2.0 * x * y);
    printf("Result = %.4f\n", res2);

    // №3
    printf("Task 3: ");
    if (r1 == 0.0 || r2 == 0.0) {
        printf("Error: R1 or R2 is 0\n");
    }
    else {
        double res3 = (1.0 / r1) + (1.0 / r2);
        printf("Result = %.4f\n", res3);
    }

    // №4
    printf("Task 4: ");
    if (x == 1.0) {
        printf("Error: x cannot be 1\n");
    }
    else {
        double base4 = (x + 1.0) / (x - 1.0);
        if (base4 <= 0.0) {
            printf("Error: invalid x value\n");
        }
        else {
            double res4 = pow(base4, x) + 18.0 * x * pow(y, 2.0);
            printf("Result = %.4f\n", res4);
        }
    }

    // №5
    printf("Task 5: ");
    if (x == 0.0) {
        printf("Error: x cannot be 0\n");
    }
    else {
        double base5 = 1.0 + (1.0 / (x * x));
        double res5 = pow(base5, x) - 12.0 * (x * x) * y;
        printf("Result = %.4f\n", res5);
    }

    return 0;
}