#include <stdio.h>

int main(void) {

    int n, i1, i2, i3, i4, i5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    i5 = n % 8;
    n /= 8;

    i4 = n % 8;
    n /= 8;

    i3 = n % 8;
    n /= 8;

    i2 = n % 8;
    n /= 8;

    i1 = n % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", i1, i2, i3, i4, i5);

    return 0;
}