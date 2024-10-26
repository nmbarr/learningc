#include <stdio.h>

int main(void) {

    int size = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int matrix[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }

    int num = 1;
    int row = 0;
    int col = size / 2;
    int current_row, current_col;

    while (num < size * size) {
        matrix[row][col] = num;
        num++;
        current_row = row;
        current_col = col;
        row -= 1;
        col += 1;

        if (row < 0) {row = size - 1;}
        if (col == size) {col = 0;}

        if (matrix[row][col] != 0) {
            row = current_row + 1;
            col = current_col;
            if (row == size) {row = 0;}
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}