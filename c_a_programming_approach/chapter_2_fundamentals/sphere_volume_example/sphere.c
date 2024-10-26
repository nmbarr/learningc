#include <stdio.h>

#define PI 3.14159265358979323846
#define SCALE_FACTOR ((4.0f / 3.0f) * PI)

int main(void) {

    int radius;
    float volume;

    printf("Enter radius of sphere: ");
    scanf("%d", &radius);

    volume = SCALE_FACTOR * radius * radius * radius;

    printf("Sphere Volume: %.2f\n", volume);

    return 0;
}