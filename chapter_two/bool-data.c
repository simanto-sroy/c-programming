#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // short is_logged_in = 0;

    bool is_logged_in = true;

    if(is_logged_in) {
        printf("Logged In\n");
    }else{
        printf("Not logged in\n");
    }
    return 0;
}