#include <stdio.h>

int main(void) {
    
    float x, x2, x3, x4, x5, result;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    x2 = x * x;
    x3 = x2 * x;
    x4 = x3 * x;
    x5 = x4 * x;

    result = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;

    printf("The value of the polynomial is: %.2f\n", result);

    return 0;
}
