#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define NUM_DIRECTIONS 4

int main(void) {

    char matrix[ROWS][COLS];
    int i, j, direction, attempts;
    int row, col;
    bool is_trapped = false;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));
    row = rand() % ROWS;
    col = rand() % COLS;

    matrix[row][col] = 'A';

    for (i = 'B'; i <= 'Z'; i++) {
        attempts = 0;
        while (attempts < 4) {
            direction = rand() % 4;
            int new_row = row;
            int new_col = col;

            switch (direction) {
                case 0: new_row--; break;
                case 1: new_row++; break;
                case 2: new_col--; break;
                case 3: new_col++; break;
            }

            if (new_row >= 0 && new_row < ROWS && new_col >= 0 && new_col < COLS && matrix[new_row][new_col] == '.') {
                row = new_row;
                col = new_col;
                matrix[row][col] = i;
                break;
            } else {
                attempts++;
            }
        }

        if (attempts == 4) {
            is_trapped = true;
            break;
        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    if (is_trapped)
        printf("\nThe letter %c got trapped!\n", i - 1);
    else
        printf("\nCompleted 'A' through 'Z'\n");

    return 0;
}
