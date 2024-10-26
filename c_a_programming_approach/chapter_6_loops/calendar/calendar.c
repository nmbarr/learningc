#include <stdio.h>

int main(void) {
    int days_in_month, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (int i = 1; i < start_day; i++) {
        printf("   ");
    }

    for (int day = 1; day <= days_in_month; day++) {
        printf("%2d ", day);

        if ((day + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
