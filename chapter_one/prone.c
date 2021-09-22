#include <stdio.h>

int main () {
    float a, b, result;

    printf("Enter Your Number:");

    scanf("%f %f", &a, &b);

    result = a + b;
    printf("%.2f + %.2f = %.2f\n", a, b, result);

    result = a - b;
    printf("%.2f - %.2f = %.2f\n", a, b, result);

    result = a * b;
    printf("%.2f * %.2f = %.2f\n", a, b, result);

    result = a / b;
    printf("%.2f / %.2f = %.2f\n", a, b, result);

    return 0;
}