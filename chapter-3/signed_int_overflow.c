#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ABS(i) ((i)< 0 ? -(i) : i)

int main() {

    signed int si = INT_MIN;
    signed int abs_si = ABS(si); //undefined behavior
    printf("%d\n", abs_si);

    return EXIT_SUCCESS;
}