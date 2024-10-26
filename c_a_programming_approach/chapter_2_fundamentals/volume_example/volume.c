#include <stdio.h>

int main(void) {
    float height = 8.5f;
    float length = 12.48f;
    float width = 10.24f;

    float volume = height * length * width;

    printf("The volume is: %.2f\n", volume);
    return 0;
}