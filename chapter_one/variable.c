#include <stdio.h>

int abc = 100; //global variable
int main() {
    //variable
    // int var = 55;
    // printf("var + 5 = %d\n", var + 5);
    // printf("var - 5 = %d\n", var - 5);
    // printf("var * 5 = %d\n", var * 5);
    // printf("var / 5 = %d\n", var / 5);


    //local variable

    int a = 10;
    float b = 20.10f;
    int c;
    c=100;
    c=400;

    printf("%d\n", abc);
    printf("%d\n", c);
    
    //integer sumation
    printf("%d + %f = %d\n", a, b, a + b);
    printf("%d - %f = %d\n", a, b, a - b);
    printf("%d * %f = %d\n", a, b, a * b);
    printf("%d / %f = %d\n", a, b, a / b);

    //floationg sumation
    printf("%d + %f = %f\n", a, b, a + b);
    printf("%d - %f = %f\n", a, b, a - b);
    printf("%d * %f = %f\n", a, b, a * b);
    printf("%d / %f = %f\n", a, b, a / b);

    return 0;
}

//c-> programming language used 2 types of variables such as global & Local