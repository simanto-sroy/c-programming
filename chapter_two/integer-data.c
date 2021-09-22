#include <stdio.h>

int main (void) {

    //Singed Integer DataType

    //short - %d %hi
    short a = 11;
    printf("I am a short - %hi\n", a);

    //int - %d
    int b = 1000;
    printf("I am a int - %d\n", b);

    //long - %ld, li
    long c = 10000L;
    printf("I am a long - %ld\n", c);

    //long long - %lld
    long long d = 10000LL;
    printf("I am a long long - %lld\n", d);

    //octal int-%o 
    int o = 0777;
    printf("I am a octal int - %o\n", o);

    //hexadecimal int - %X/%x
    int h = 0Xfff;
    printf("I am a hexadecimal int - %x\n", h);


    //Unsigned Integer DataTypes

    //unsigned short - %hu
    unsigned short us = 4;
    printf("I am a unsigned short - %hu\n", us);

    //unsigned int - %u
    unsigned int ui = 434;
    printf("I am a unsigned int - %u\n", ui);

    //unsigned long - %lu
    unsigned long ul = 43444L;
    printf("I am a unsigned long - %lu\n", ul);

    //unsigned long long - %llu
    unsigned long long ull = 4344444LL;
    printf("I am a unsigned long long - %llu\n", ull);

    //unsigned short negative
    unsigned short negative = -2;
    printf("I am a negative - %hu\n", negative);

    return 0;
}