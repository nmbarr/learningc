#include <stdio.h>

int main(void) {

    int n, first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    first_digit = n / 10;
    second_digit = n % 10;

    printf("The reversal is: %1d%1d\n", second_digit, first_digit);

    return 0;
}