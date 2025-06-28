#include<stdio.h>


int main(void){
    int i = 8, j = 9, k = 3;

    printf("%d\n", ++i + ++j * --k);

    return 0;
}