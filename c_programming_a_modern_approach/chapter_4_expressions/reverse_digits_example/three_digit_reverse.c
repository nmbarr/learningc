#include <stdio.h>

int main(void) {

    int n, first_digit, second_digit, third_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    first_digit = n / 100;
    second_digit = n % 100 / 10;
    third_digit = n % 10;

    printf("The reversal is: %1d%1d%1d\n", third_digit, second_digit, first_digit);

    return 0;
}