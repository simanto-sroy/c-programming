#include <stdio.h>

int main(void) {
    char ch = 'T';
    int r = (int)ch + 100;
    printf("%c %d %x\n", ch, ch, ch);
    printf("Result: %d\n", r);

    // float f = r;
    // printf("%f\n", f);

    float a = 5.3f;
    float b = 3.3f;
    float c = 2.2f;

    int result = a + b + c ;
    printf("%d\n", result);

    int result2 = (int)a + (int)b + (int)c ;
    printf("%d\n", result2);

    return 0;
}