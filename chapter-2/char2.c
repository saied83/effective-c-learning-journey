#include<stdio.h>
#include <limits.h>
#include <stdint.h>

int main(){
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
    str[i] = '0' + i;
    }
    str[10] = '\0';

    printf("%p\n", str);
    printf("%p\n", str + 1);
    printf("%p\n", str + 2);
    return 0;
}