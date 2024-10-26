#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10

void store_array_values(int b[], int n);
int sum_array(int b[], int n);

int main(void) {

    int b[LENGTH], total;
    store_array_values(b, LENGTH);
    total = sum_array(b, LENGTH);

    printf("Total: %d\n", total);

    return 0;
}

void store_array_values(int b[], int n) {

    srand((unsigned) time(NULL));

    for (int i = 0; i < n; i++) {
        b[i] = rand() % n;
        printf("b[%d] = %d\n", i, b[i]);
    }
}

int sum_array(int b[], int n) {

    int sum = 0; 

    for (int i = 0; i < n; i++) {
        sum += b[i];
    }

    return sum;
}