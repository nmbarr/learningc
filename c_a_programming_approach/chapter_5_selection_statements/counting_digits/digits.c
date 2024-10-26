#include <stdio.h>

#define ONE_DIGIT 10
#define TWO_DIGITS 100
#define THREE_DIGITS 1000

int main(void) {

    int number, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < ONE_DIGIT) {
        digits = 1;
    }
    else if (number < TWO_DIGITS) {
        digits = 2;
    }
    else if (number < THREE_DIGITS) {
        digits = 3;
    }

    printf("The number %d has %d digits\n", number, digits);

    return 0;
}