#include <stdio.h>

int main(void) {

    int m, n, remainder;

    printf("Enter two integers (int1 int2): ");
    scanf("%d %d", &m, &n);

    while (n != 0) {

        remainder = m % n;
        m = n;
        n = remainder;

    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}