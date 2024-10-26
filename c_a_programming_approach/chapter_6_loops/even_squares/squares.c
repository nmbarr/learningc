#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even squares between 1 and %d:\n", n);
    for (int i = 1; i * i <= n; i++) {
        if ((i * i) % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
