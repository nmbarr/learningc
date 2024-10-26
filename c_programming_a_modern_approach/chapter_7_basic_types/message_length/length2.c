#include <stdio.h>

int main(void) {

    char ch;
    int len = 0;

    printf("Enter a message: ");

    while (getchar() != '\n') {
        len++;
    }

    printf("Your mmessage was %d character(s) long.\n", len);
    
    return 0;
}