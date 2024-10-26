#include <stdio.h>

#define TAX 0.05f

int main(void) {

    float amount, amount_with_tax;

    printf("Enter an amount: $");
    scanf("%f", &amount);

    amount_with_tax = (amount * TAX) + amount;

    printf("With tax added: $%.2f\n", amount_with_tax);

    return 0;
}