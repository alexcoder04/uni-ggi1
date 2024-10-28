#include <stdio.h>

int main(){
    int i0, i1, i2, i3, i4;
    double d0, d1, d2, d3, d4;

    d0 = 3/4.0;
    d1 = 3./4;
    d2 = 3/4;
    d3 = d0 + 2;
    d4 = d2 + 2;

    i0 = 3/4.0 + 2;
    i1 = 5 - 3./4;
    i2 = 3/4 + 2;
    i3 = 4 + 1%3;
    i4 = 5 * 8 % 3 / 2;

    printf("i0: %d\n", i0);
    printf("i1: %d\n", i1);
    printf("i2: %d\n", i2);
    printf("i3: %d\n", i3);
    printf("i4: %d\n", i4);

    printf("d0: %f\n", d0);
    printf("d1: %f\n", d1);
    printf("d2: %f\n", d2);
    printf("d3: %f\n", d3);
    printf("d4: %f\n", d4);

    return 0;
}

