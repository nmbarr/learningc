#include <stdio.h>

int main(void) {

    int int_size = (int) sizeof(int);
    int short_size = (int) sizeof(short);
    int long_size = (int) sizeof(long);
    int float_size = (int) sizeof(float);
    int double_size = (int) sizeof(double);
    int long_double_size = (int) sizeof(long double);

    printf("Displays how much memory is required on this computer \n");
    printf("to store values of a particular type.\n\n");

    printf("Size of int:             %d bytes (%d bits)\n", int_size, int_size * 8);
    printf("Size of short:           %d bytes (%d bits)\n", short_size, short_size * 8);
    printf("Size of long:            %d bytes (%d bits)\n", long_size, long_size * 8);
    printf("Size of float:           %d bytes (%d bits)\n", float_size, float_size * 8);
    printf("Size of double:          %d bytes (%d bits)\n", double_size, double_size * 8);
    printf("Size of long double:    %d bytes (%d bits)\n", long_double_size, long_double_size * 8);

    return 0;
}