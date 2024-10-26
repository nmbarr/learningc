#include <stdio.h>

#define MONTHLY_INTEREST_RATE (0.01f / 12.0f)

int main(void) {

    float loan_amount, interest_rate, monthly_payment, first_payment, second_payment, third_payment;

    printf("Enter amount of loan: $");
    scanf("%f",&loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: $");
    scanf("%f", &monthly_payment);

    first_payment = loan_amount - monthly_payment + (loan_amount * MONTHLY_INTEREST_RATE * interest_rate);

    second_payment = first_payment - monthly_payment + (first_payment * MONTHLY_INTEREST_RATE * interest_rate);

    third_payment = second_payment - monthly_payment + (second_payment * MONTHLY_INTEREST_RATE * interest_rate);

    printf("Balance remaining after first payment: $%.2f\n", first_payment);

    printf("Balance remaining after second payment: $%.2f\n", second_payment);

    printf("Balance remaining after third payment: $%.2f\n", third_payment);

    return 0;
}