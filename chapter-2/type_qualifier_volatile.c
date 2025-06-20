#include<stdint.h>
#include<stdlib.h>

int main() {

_Atomic int hello = 1;

    static const volatile int flag;

    if (flag == 0) {
        while (flag == 0) {
            // might get optimized to: while (true)
            // but not for volatile it will 
            // every read must go directly to memory, not a cached copy.
        }
    }

    return EXIT_SUCCESS;
}