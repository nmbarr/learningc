#include <stdio.h>

int main(void) {

    int n;
    float e = 1.0f;
    float factorial = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e using %d terms: %.10f\n", n, e);
    
    return 0;
}