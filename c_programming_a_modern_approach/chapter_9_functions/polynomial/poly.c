#include <stdio.h>

int polynomial(int x);
int power(int x, int n);

int main(void) {

    int x, result;

    printf("Computes the value of the following polynomial\n");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");

    printf("Enter a value for x: ");
    scanf("%d", &x);

    result = polynomial(x);
    printf("The result is: %d\n", result);

    return 0;
}

int polynomial(int x) {
    int value;

    value = 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;

    return value;
}

int power(int x, int n) {
    if (n == 0) return 1;
    int temp = power(x, n / 2);
    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return x * temp * temp;
    }
}