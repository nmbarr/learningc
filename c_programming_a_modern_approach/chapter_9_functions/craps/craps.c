#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {

    char replay = 'y';
    int wins = 0, loses = 0;
    bool result;

    srand((unsigned) time(NULL));

    while(replay == 'y' || replay == 'Y') {

        result = play_game();
        if (result) {
            printf("You win!\n");
            wins++;
        } else {
            printf("You lose!\n");
            loses++;
        }

        printf("Play again (Y/n)? ");
        scanf(" %c", &replay);
        printf("\n");
    }

    printf("Wins: %d   Loses: %d\n", wins, loses);

    return 0;
}

int roll_dice(void) {

    int i, sum = 0;

    for (i = 0; i < 2; i++) {
        sum += (rand() % 6) + 1;
    }

    return sum;
}

bool play_game(void) {
    bool first_roll = true, status = true;
    int result, point;

    while (status) {
        result = roll_dice();
        printf("You rolled: %d\n", result);

        if (first_roll) {
            switch (result) {
                case 7: case 11: {return true;}
                case 2: case 3: case 12: {return false;}
                default:
                    point = result;
                    printf("Your point is: %d\n", point);
                    first_roll = false;
                    break;
            }
        } else {
            if (result == point) {
                return true;
            } else if (result == 7) {
                return false;
            }
        }
    }

    return false;    
}