#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void) {

    int a[N], i;

    printf("Enter %d numbers to sort: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(a, N);

    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {

    if (n <= 1) return;

    int i, largest_idx = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > a[largest_idx]) {
            largest_idx = i;
        }
    }

    int temp = a[n - 1];
    a[n - 1] = a[largest_idx];
    a[largest_idx] = temp;

    selection_sort(a, n - 1);
}