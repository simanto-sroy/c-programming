#include <stdio.h>

int main (void) {
    char name[20];
    name[0] = 'S';
    name[1] = 'i';
    name[2] = 'm';
    name[3] = 'a';
    name[4] = 'n';
    name[5] = 't';
    name[6] = 'o';
    printf("%s\n", name);

    char name2[20] = {'s', 'i', 'm', 'a', 'n', 't','o'};
    printf("%s\n", name2);

    char name3[20] = "Simanto Roy";
    printf("%s\n", name3);
    return 0;
}