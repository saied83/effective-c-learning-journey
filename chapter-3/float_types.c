#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

const char *show_classification(double x) {
    switch(fpclassify(x)) {
        case FP_INFINITE: return "Inf";
        case FP_NAN: return "NaN";
        case FP_NORMAL: return "normal";
        case FP_SUBNORMAL: return "subnormal";
        case FP_ZERO: return "zero";
        default: return "unknown";
    }
}

int main() {
    double numbers[] = {
        0.0,
        -0.0,
        1.0,
        DBL_MIN / 2.0,     // subnormal
        INFINITY,
        -INFINITY,
        NAN
    };

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        printf("Value: %g -> %s\n", numbers[i], show_classification(numbers[i]));
    }

    return EXIT_SUCCESS;
}
