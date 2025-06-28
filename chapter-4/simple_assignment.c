#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int main(){
    signed char c;
    int i = INT_MAX;
    c = i;
    printf("%d\n", c);

    long k;
    k = (c = i);
    printf("%ld\n", k);
    return EXIT_SUCCESS;
}