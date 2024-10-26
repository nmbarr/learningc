#include <stdio.h>

#define TWENTY_DOLLAR 20
#define TEN_DOLLAR 10
#define FIVE_DOLLAR 5
#define ONE_DOLLAR 1

int main(void) {
    
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: $");
    scanf("%d", &amount);

    twenties = amount / TWENTY_DOLLAR;
    amount %= TWENTY_DOLLAR;

    tens = amount / TEN_DOLLAR;
    amount %= TEN_DOLLAR;

    fives = amount / FIVE_DOLLAR;
    amount %= FIVE_DOLLAR;

    ones = amount / ONE_DOLLAR;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}
