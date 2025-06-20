#include<stdint.h>
#include<stdlib.h>

int main() {

_Atomic int hello = 1;

    // read only memory 
    const int i = 1; // const-qualified int
    // i = 2;  error: i is const-qualified

    // compile error 
    const int i = 1; // object of const-qualified type
    int *ip = (int *)&i;
    *ip = 2; // undefined behavior


    // right & wrong way 
    int i = 12;
    const int j = 12;
    const int *ip = &i;
    const int *jp = &j;
    *(int *)ip = 42; // OK
    *(int *)jp = 42; // undefined behavior
    
    printf("%d\n", i);
    return EXIT_SUCCESS;
}