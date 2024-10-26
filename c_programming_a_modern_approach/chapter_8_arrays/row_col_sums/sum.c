#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLS 5

int main(void) {

    int m[NUM_ROWS][NUM_COLS];
    int i, j;
    int row_totals = 0, col_totals = 0;

    printf("Enter integers for a %d x %d matrix.\n\n", NUM_ROWS, NUM_COLS);
    for (i = 0; i < NUM_ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < NUM_COLS; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nRow Totals: ");
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
            row_totals += m[i][j];
        }
        printf("%d ", row_totals);
        row_totals = 0;
    }

    printf("\nColumn Totals: ");
    for (j = 0; j < NUM_COLS; j++) {
        for (i = 0; i < NUM_ROWS; i++) {
            col_totals += m[i][j];
        }
        printf("%d ", col_totals);
        col_totals = 0;
    }

    printf("\n");

    return 0;
}