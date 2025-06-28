#include<stdio.h>
#include<stdlib.h>

int main() {

    char cba[] = "cba";
    char *p = cba;
    printf("%c\n", ++*p);
    char xyz[] = "xyz";
    char *q = xyz;
    printf("%c\n",*q++);
    return EXIT_SUCCESS;
}