#include <stdio.h>

int main(void) {

    float n, larget_number = 0;

    printf("This program finds the largest number in a series of numbers.\n");
    printf("0 or a negative number while exit the loop\n\n");

    while(1) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if(n <= 0) {
            break;
        }

        if (n > larget_number) {
            larget_number = n;
        }
    }

    printf("The largest number entered was: %f\n", larget_number);

    return 0;
}